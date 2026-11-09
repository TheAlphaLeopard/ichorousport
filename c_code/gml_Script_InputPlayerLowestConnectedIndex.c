// gml_Script_InputPlayerLowestConnectedIndex @ 0x14034d5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputPlayerLowestConnectedIndex
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
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
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 uVar14;
  undefined4 uVar15;
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
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_f0 = "gml_Script_InputPlayerIsConnected";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 9;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,1,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_14c = 0;
  local_158 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde548) &&
     (_Init_thread_header(&DAT_141dde548), DAT_141dde548 == -1)) {
    DAT_141dde550 = (longlong *)FUN_140e63aa0(DAT_1419f2bc8);
    _Init_thread_footer(&DAT_141dde548);
  }
  local_e8 = 9;
  puVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_80;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_e8 = 9;
    if ((int)local_88[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_80;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc116 == '\0') {
    FUN_140e64380(DAT_141dde550,"gml_Script_InputPlayerIsConnected");
    FUN_140e64380(local_res8,"gml_Script_InputPlayerIsConnected");
  }
  local_e8 = 0xb;
  if (DAT_141ddc116 == '\0') {
    DAT_141ddc116 = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde550 + 0x10))(DAT_141dde550,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde550);
    uVar11 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_158,0,0);
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
  local_e8 = 4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14034d889:
    local_168 = *puVar5;
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
  else {
    puVar5 = (undefined8 *)*local_80;
    if (puVar5 != &local_148) goto LAB_14034d889;
  }
  local_c0 = &local_148;
  uVar14 = CONCAT44(uVar11,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar14,&local_c0);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  uVar11 = 0;
  if (cVar2 == '\0') {
    local_e8 = 6;
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    if ((int)local_88[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14034d95a:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar5 = (undefined8 *)*local_80;
      if (puVar5 != &local_138) goto LAB_14034d95a;
    }
    local_b8 = &local_138;
    local_168 = CONCAT44(uRam0000000141dd0e3c,_DAT_141dd0e38);
    uStack_160 = uRam0000000141dd0e40;
    uStack_15c = DAT_141dd0e44;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_b0 = local_128;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_e0,1,CONCAT44(uVar15,DAT_1419fdc58),
                           &local_b8);
    if (puVar5 != &local_118) {
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    local_a8 = &local_118;
    local_168 = CONCAT44(uRam0000000141dd0e6c,_DAT_141dd0e68);
    uStack_160 = uRam0000000141dd0e70;
    uStack_15c = DAT_141dd0e74;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a0 = local_108;
    FUN_14008e020(local_res8,local_res10,&local_d0,3,&local_b0);
    uVar11 = local_c4;
  }
  local_e8 = 0xd;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_80;
  }
  uStack_15c = 0;
  uVar13 = 0x3ff00000;
  local_168 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar4 < 0x80000000) {
    local_e8 = 0x11;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_168 = CONCAT44(uRam0000000141dd0e1c,_DAT_141dd0e18);
    uStack_160 = uRam0000000141dd0e20;
    uStack_15c = DAT_141dd0e24;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
    local_c0 = &local_148;
    if ((int)local_88[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14034dba6:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar5 = (undefined8 *)*local_80;
      if (puVar5 != &local_138) goto LAB_14034dba6;
    }
    local_b8 = &local_138;
    local_168 = CONCAT44(uRam0000000141dd0e2c,_DAT_141dd0e28);
    uStack_160 = uRam0000000141dd0e30;
    uStack_15c = DAT_141dd0e34;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_b0 = local_128;
    local_168 = CONCAT44(uRam00000001419e4274,_DAT_1419e4270);
    uStack_160 = uRam00000001419e4278;
    uStack_15c = uRam00000001419e427c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
    local_a8 = &local_118;
    local_168 = CONCAT44(uRam0000000141dd0e4c,_DAT_141dd0e48);
    uStack_160 = uRam0000000141dd0e50;
    uStack_15c = DAT_141dd0e54;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a0 = local_108;
    FUN_14008e020(local_res8,local_res10,&local_158,5,&local_c0);
  }
  local_e8 = 0x15;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_80;
  }
  uStack_15c = 0;
  local_168 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_14034de4f;
  local_e8 = 0x15;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_98 = _DAT_141dd0e18;
  uStack_94 = uRam0000000141dd0e1c;
  uStack_90 = uRam0000000141dd0e20;
  uStack_8c = DAT_141dd0e24;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_98);
  local_c0 = &local_148;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14034ddb0:
    local_98 = *(undefined4 *)puVar5;
    uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_90 = *(undefined4 *)(puVar5 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_98);
  }
  else {
    puVar5 = (undefined8 *)*local_80;
    if (puVar5 != &local_138) goto LAB_14034ddb0;
  }
  local_b8 = &local_138;
  local_98 = _DAT_141dd0e58;
  uStack_94 = uRam0000000141dd0e5c;
  uStack_90 = uRam0000000141dd0e60;
  uStack_8c = DAT_141dd0e64;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_98);
  local_b0 = local_128;
  FUN_14008e020(local_res8,local_res10,&local_158,3,&local_c0);
LAB_14034de4f:
  local_e8 = 0xf;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde550 + 8))(DAT_141dde550,DAT_141a026b8);
  if (0 < (int)local_88[0]) {
    puVar10 = (undefined8 *)*local_80;
  }
  iVar3 = FUN_140e4a740(puVar10);
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
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar8);
  if (iVar3 < 1) {
    FUN_140e63970(local_78,&local_res8,&local_res10);
  }
  else {
    local_e8 = 0x11;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd858);
    uStack_15c = 10;
    local_168 = 2;
    iVar3 = FUN_140e851f0(uVar7,&local_168,DAT_141955260,0);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar3 == 0) {
      bVar12 = true;
    }
    else {
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd858);
      uStack_15c = 10;
      local_168 = 3;
      iVar3 = FUN_140e851f0(uVar7,&local_168,DAT_141955260,0);
      bVar12 = iVar3 == 0;
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (!bVar12) {
      uVar13 = 0;
    }
    *param_3 = (ulonglong)uVar13 << 0x20;
  }
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar10 = local_80;
    do {
      puVar5 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

