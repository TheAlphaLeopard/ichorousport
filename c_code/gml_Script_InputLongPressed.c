// gml_Script_InputLongPressed @ 0x1403314c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputLongPressed
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
  undefined8 uVar10;
  bool bVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  ulonglong uVar19;
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
  
  local_100 = "gml_Script_InputLong";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,3,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_16c = 0;
  local_178 = 0;
  local_15c = 0;
  local_168 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde2f0) &&
     (_Init_thread_header(&DAT_141dde2f0), DAT_141dde2f0 == -1)) {
    DAT_141dde2f8 = (longlong *)FUN_140e63aa0(DAT_1419f1868);
    _Init_thread_footer(&DAT_141dde2f0);
  }
  local_f8 = 10;
  puVar14 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_f8 = 10;
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
  if ((int)local_88[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[2];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_88[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x4024000000000000;
  }
  if (DAT_141ddc0ef == '\0') {
    FUN_140e64380(DAT_141dde2f8,"gml_Script_InputLong");
    FUN_140e64380(local_res8,"gml_Script_InputLong");
  }
  local_f8 = 0xc;
  if (DAT_141ddc0ef == '\0') {
    DAT_141ddc0ef = '\x01';
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde2f8 + 0x10))(DAT_141dde2f8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde2f8);
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_178,0,0);
    if (puVar7 != puVar6) {
      local_188 = *puVar7;
      uStack_180 = *(undefined4 *)(puVar7 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_188);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde2f8 + 0x10))(DAT_141dde2f8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde2f8);
    uVar5 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_168,0,0);
    if (puVar7 != puVar6) {
      local_188 = *puVar7;
      uStack_180 = *(undefined4 *)(puVar7 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_188);
    }
    FUN_140e60910(1);
  }
  local_f8 = 6;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1403318b5:
    local_188 = *puVar6;
    uStack_180 = *(undefined4 *)(puVar6 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
    if (puVar6 != &local_158) goto LAB_1403318b5;
  }
  local_d0 = &local_158;
  ppuVar18 = &local_d0;
  ppuVar16 = (undefined8 **)CONCAT44(uVar5,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_178,1,ppuVar16,ppuVar18);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_f8 = 10;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar5 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_1403319a8:
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
      if (puVar6 != &local_148) goto LAB_1403319a8;
    }
    local_c8 = &local_148;
    local_188 = CONCAT44(uRam0000000141dd057c,_DAT_141dd0578);
    uStack_180 = uRam0000000141dd0580;
    uStack_17c = DAT_141dd0584;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
    local_c0 = &local_138;
    ppuVar18 = &local_c8;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_f0,1,CONCAT44(uVar5,DAT_1419fdc58),ppuVar18
                          );
    if (puVar6 != &local_128) {
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_188);
    }
    local_b8 = &local_128;
    local_188 = CONCAT44(uRam0000000141dd056c,_DAT_141dd0568);
    uStack_180 = uRam0000000141dd0570;
    uStack_17c = DAT_141dd0574;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_188);
    local_b0 = local_118;
    ppuVar16 = &local_c0;
    FUN_14008e020(local_res8,local_res10,&local_168,3,ppuVar16);
  }
  local_f8 = 0xd;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  uStack_17c = 0;
  uVar15 = 0x3ff00000;
  local_188 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (uVar4 < 0x80000000) {
    local_f8 = 0x12;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_188 = CONCAT44(uRam0000000141dd055c,_DAT_141dd0558);
    uStack_180 = uRam0000000141dd0560;
    uStack_17c = DAT_141dd0564;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
    local_d0 = &local_158;
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140331bf1:
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
      if (puVar6 != &local_148) goto LAB_140331bf1;
    }
    local_c8 = &local_148;
    local_188 = CONCAT44(uRam0000000141dd053c,_DAT_141dd0538);
    uStack_180 = uRam0000000141dd0540;
    uStack_17c = DAT_141dd0544;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
    local_c0 = &local_138;
    local_188 = CONCAT44(uRam00000001419e4094,_DAT_1419e4090);
    uStack_180 = uRam00000001419e4098;
    uStack_17c = uRam00000001419e409c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_188);
    local_b8 = &local_128;
    local_188 = CONCAT44(uRam0000000141dd054c,_DAT_141dd0548);
    uStack_180 = uRam0000000141dd0550;
    uStack_17c = DAT_141dd0554;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_188);
    local_b0 = local_118;
    ppuVar16 = &local_d0;
    FUN_14008e020(local_res8,local_res10,&local_178,5,ppuVar16);
  }
  local_f8 = 0x17;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  uStack_17c = 0;
  local_188 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140331e96;
  local_f8 = 0x17;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_98 = _DAT_141dd0558;
  uStack_94 = uRam0000000141dd055c;
  uStack_90 = uRam0000000141dd0560;
  uStack_8c = DAT_141dd0564;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_98);
  local_d0 = &local_158;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140331dfb:
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
    if (puVar6 != &local_148) goto LAB_140331dfb;
  }
  local_c8 = &local_148;
  local_98 = _DAT_141dd0528;
  uStack_94 = uRam0000000141dd052c;
  uStack_90 = uRam0000000141dd0530;
  uStack_8c = DAT_141dd0534;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_98);
  local_c0 = &local_138;
  ppuVar16 = &local_d0;
  FUN_14008e020(local_res8,local_res10,&local_178,3,ppuVar16);
LAB_140331e96:
  local_f8 = 0x11;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde2f8 + 8))(DAT_141dde2f8,DAT_141a026b8);
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
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar12 = plVar9;
  }
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(plVar12,DAT_1419fd6e8,uVar5,&local_a8,uVar17,uVar19);
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
      puVar14 = (undefined8 *)local_80[1];
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
    FUN_140e87440(plVar9,DAT_1419fd6e8,uVar5,&local_a8,uVar17 & 0xffffffffffffff00,
                  uVar19 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
  }
  else {
    local_f8 = 0x13;
    bVar11 = false;
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 != '\0') {
      uVar8 = (**(code **)(*DAT_141dde2f8 + 8))(DAT_141dde2f8,DAT_1419fcb48);
      uVar10 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd758);
      FUN_140e87440(uVar8,DAT_1419fe1c8,0x80000000,&local_e0,uVar17 & 0xffffffffffffff00,
                    uVar19 & 0xffffffffffffff00);
      uStack_17c = local_d4;
      uStack_180 = local_d8;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) == 0) {
        local_188 = local_e0;
      }
      else {
        FUN_1400419b0(&local_188,&local_e0);
      }
      FUN_1400462a0(&local_188,uVar10);
      if (2 < (int)local_88[0]) {
        puVar14 = (undefined8 *)local_80[2];
      }
      uVar4 = FUN_140e851f0(&local_188,puVar14,DAT_141955260,1);
      bVar11 = uVar4 < 0x80000000;
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (!bVar11) {
      uVar15 = 0;
    }
    *param_3 = (ulonglong)uVar15 << 0x20;
  }
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar14 = local_80;
    do {
      puVar6 = (undefined8 *)*puVar14;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar14 = puVar14 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

