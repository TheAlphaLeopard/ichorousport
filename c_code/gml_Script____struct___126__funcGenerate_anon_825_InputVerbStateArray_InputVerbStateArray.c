// gml_Script____struct___126__funcGenerate_anon_825_InputVerbStateArray_InputVerbStateArray @ 0x14037ab00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___126__funcGenerate_anon_825_InputVerbStateArray_InputVerbStateArray
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
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
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
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
  
  local_d0 = "gml_Script_InputVerbSetMetadata";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xd;
  FUN_140041df0(local_68,param_4,4,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_a4 = 0xffffff;
  local_b0 = (undefined8 *)0x0;
  local_14c = 0;
  local_158 = 0;
  local_13c = 0;
  local_148 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde860) &&
     (_Init_thread_header(&DAT_141dde860), DAT_141dde860 == -1)) {
    DAT_141dde858 = (longlong *)FUN_140e63aa0(DAT_1419f3e38);
    _Init_thread_footer(&DAT_141dde860);
  }
  local_c8 = 0xd;
  puVar13 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[2];
  }
  iVar5 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_c8 = 0xd;
    if ((int)local_68[0] < 3) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_60[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if ((int)local_68[0] < 4) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[3];
  }
  iVar5 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    uStack_15c = 0xd;
    local_168 = 0;
    if ((int)local_68[0] < 4) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_60[3];
      if (&local_168 == puVar8) goto LAB_14037ad20;
    }
    local_138 = 0;
    uStack_130 = uStack_160;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_138);
  }
LAB_14037ad20:
  if (DAT_141ddc14f == '\0') {
    FUN_140e64380(DAT_141dde858,"gml_Script_InputVerbSetMetadata");
    FUN_140e64380(param_1,"gml_Script_InputVerbSetMetadata");
  }
  local_c8 = 0xf;
  if (DAT_141ddc14f == '\0') {
    DAT_141ddc14f = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar8 = (undefined8 *)(**(code **)(*DAT_141dde858 + 0x10))(DAT_141dde858,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde858);
    uVar7 = 0;
    puVar9 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_158,0,0);
    if (puVar9 != puVar8) {
      local_168 = *puVar9;
      uStack_160 = *(undefined4 *)(puVar9 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_168);
    }
    FUN_140e60910(1);
  }
  local_c8 = 4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_68[0] < 3) {
    puVar8 = &DAT_1419df7b0;
LAB_14037ae5b:
    local_168 = *puVar8;
    uStack_160 = *(undefined4 *)(puVar8 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  else {
    puVar8 = (undefined8 *)local_60[2];
    if (puVar8 != &local_128) goto LAB_14037ae5b;
  }
  local_a0 = &local_128;
  ppuVar16 = &local_a0;
  ppuVar14 = (undefined8 **)CONCAT44(uVar7,DAT_141a014a8);
  uVar10 = FUN_140e634e0(param_1,param_2,&local_158,1,ppuVar14,ppuVar16);
  cVar4 = FUN_140e491e0(uVar10);
  if (cVar4 == '\0') {
    local_c8 = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uVar7 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((int)local_68[0] < 3) {
      puVar8 = &DAT_1419df7b0;
LAB_14037af44:
      local_168 = *puVar8;
      uStack_160 = *(undefined4 *)(puVar8 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    else {
      puVar8 = (undefined8 *)local_60[2];
      if (puVar8 != &local_118) goto LAB_14037af44;
    }
    local_98 = &local_118;
    local_168 = CONCAT44(uRam0000000141dd1dbc,_DAT_141dd1db8);
    uStack_160 = uRam0000000141dd1dc0;
    uStack_15c = DAT_141dd1dc4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
    local_90 = &local_108;
    ppuVar16 = &local_98;
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_c0,1,CONCAT44(uVar7,DAT_1419fdc58),&local_98);
    if (puVar8 != &local_f8) {
      local_168 = *puVar8;
      uStack_160 = *(undefined4 *)(puVar8 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_168);
    }
    local_88 = &local_f8;
    local_168 = CONCAT44(uRam0000000141dd1dec,_DAT_141dd1de8);
    uStack_160 = uRam0000000141dd1df0;
    uStack_15c = DAT_141dd1df4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
    local_80 = local_e8;
    ppuVar14 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,3,ppuVar14);
  }
  local_c8 = 0xb;
  if ((int)local_68[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[2];
  }
  uStack_15c = 0;
  local_168 = 0x3ff0000000000000;
  uVar6 = FUN_140e851f0(puVar8,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar6 < 0x80000000) {
    local_c8 = 0xf;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_168 = CONCAT44(uRam0000000141dd1dcc,_DAT_141dd1dc8);
    uStack_160 = uRam0000000141dd1dd0;
    uStack_15c = DAT_141dd1dd4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
    local_a0 = &local_128;
    if ((int)local_68[0] < 3) {
      puVar8 = &DAT_1419df7b0;
LAB_14037b178:
      local_168 = *puVar8;
      uStack_160 = *(undefined4 *)(puVar8 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    else {
      puVar8 = (undefined8 *)local_60[2];
      if (puVar8 != &local_118) goto LAB_14037b178;
    }
    local_98 = &local_118;
    local_168 = CONCAT44(uRam0000000141dd1dfc,_DAT_141dd1df8);
    uStack_160 = uRam0000000141dd1e00;
    uStack_15c = DAT_141dd1e04;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
    local_90 = &local_108;
    local_168 = CONCAT44(uRam00000001419e45a4,_DAT_1419e45a0);
    uStack_160 = uRam00000001419e45a8;
    uStack_15c = uRam00000001419e45ac;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_88 = &local_f8;
    local_168 = CONCAT44(uRam0000000141dd1ddc,_DAT_141dd1dd8);
    uStack_160 = uRam0000000141dd1de0;
    uStack_15c = DAT_141dd1de4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
    local_80 = local_e8;
    ppuVar14 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_158,5,ppuVar14);
  }
  local_c8 = 0x14;
  if ((int)local_68[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[2];
  }
  uStack_15c = 0;
  local_168 = 0;
  iVar5 = FUN_140e851f0(puVar8,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar5 != -2 && iVar5 < 0) {
    local_c8 = 0x17;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_138 = CONCAT44(uRam0000000141dd1dcc,_DAT_141dd1dc8);
    uStack_130 = uRam0000000141dd1dd0;
    uStack_12c = DAT_141dd1dd4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_138);
    local_a0 = &local_128;
    if ((int)local_68[0] < 3) {
      puVar8 = &DAT_1419df7b0;
LAB_14037b377:
      local_138 = *puVar8;
      uStack_130 = *(undefined4 *)(puVar8 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_138);
    }
    else {
      puVar8 = (undefined8 *)local_60[2];
      if (puVar8 != &local_118) goto LAB_14037b377;
    }
    local_98 = &local_118;
    local_138 = CONCAT44(uRam0000000141dd1dac,_DAT_141dd1da8);
    uStack_130 = uRam0000000141dd1db0;
    uStack_12c = DAT_141dd1db4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_90 = &local_108;
    ppuVar14 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_158,3,ppuVar14);
  }
  local_c8 = 0x13;
  plVar11 = (longlong *)(**(code **)(*DAT_141dde858 + 8))(DAT_141dde858,DAT_141a026b8);
  if ((int)local_68[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[2];
  }
  iVar5 = FUN_140e4a740(puVar8);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  FUN_140e87440(plVar11,DAT_1419fd7d8,0x80000000,&local_78,uVar15,
                (ulonglong)ppuVar16 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar15 >> 0x20);
  local_168 = local_78;
  uStack_160 = uStack_70;
  uStack_15c = uStack_6c;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_168);
  local_c8 = 0x14;
  if ((int)local_68[0] < 4) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[3];
  }
  cVar4 = FUN_140e491e0(puVar8);
  if (cVar4 == '\0') {
    if ((int)local_68[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_60[1];
    }
    uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_130 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_138);
    }
    puVar8 = &local_138;
    bVar3 = false;
    bVar2 = true;
    goto LAB_14037b634;
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
LAB_14037b54a:
    local_168 = *puVar8;
    uStack_160 = *(undefined4 *)(puVar8 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
    if (puVar8 != &local_118) goto LAB_14037b54a;
  }
  local_98 = &local_118;
  puVar8 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar7,DAT_1419fd0c8),&local_98);
  uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_160 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_168,puVar8);
  }
  puVar8 = &local_168;
  bVar3 = true;
  bVar2 = false;
LAB_14037b634:
  if (0 < (int)local_68[0]) {
    puVar13 = (undefined8 *)*local_60;
  }
  uVar7 = FUN_140e4a740(puVar13);
  puVar13 = (undefined8 *)FUN_140e48e40(&local_b0,uVar7);
  FUN_140e609c0(*local_b0);
  if (puVar8 != puVar13) {
    local_58 = *(undefined4 *)puVar8;
    uStack_54 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_50 = *(undefined4 *)(puVar8 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    FUN_140041b80(puVar13,&local_58);
  }
  if ((bVar2) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((bVar3) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar13 = local_60;
    do {
      puVar8 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

