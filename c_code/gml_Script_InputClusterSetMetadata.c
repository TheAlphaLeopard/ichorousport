// gml_Script_InputClusterSetMetadata @ 0x1403055e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputClusterSetMetadata
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  undefined8 **ppuVar15;
  ulonglong in_stack_fffffffffffffe90;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
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
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  ppuVar18 = &local_98;
  local_d0 = "gml_Script_InputClusterResetMetadata";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 8;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_a4 = 0xffffff;
  local_b0 = (undefined8 *)0x0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_15c = 0;
  local_168 = 0;
  local_13c = 0;
  local_148 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddffc) &&
     (_Init_thread_header(&DAT_141dddffc), DAT_141dddffc == -1)) {
    DAT_141dde000 = (longlong *)FUN_140e63aa0(DAT_1419efc18);
    _Init_thread_footer(&DAT_141dddffc);
  }
  local_c8 = 8;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_c8 = 8;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc0ba == '\0') {
    FUN_140e64380(DAT_141dde000,"gml_Script_InputClusterResetMetadata");
    FUN_140e64380(param_1,"gml_Script_InputClusterResetMetadata");
  }
  local_c8 = 10;
  if (DAT_141ddc0ba == '\0') {
    DAT_141ddc0ba = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde000 + 0x10))(DAT_141dde000,DAT_1419fd698);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar14 = 0;
    uVar7 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_168,0,0);
    FUN_140e87440(uVar7,DAT_1419fd578,0x80000000,&local_78,uVar14 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141dde000);
    if (&local_78 != puVar6) {
      local_158 = local_78;
      uStack_150 = uStack_70;
      uStack_14c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_158);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde000 + 0x10))(DAT_141dde000,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde000);
    uVar16 = 0;
    puVar8 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_148,0,0);
    if (puVar8 != puVar6) {
      local_158 = *puVar8;
      uStack_150 = *(undefined4 *)(puVar8 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_158);
    }
    FUN_140e60910(1);
  }
  local_c8 = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1403059a0:
    local_158 = *puVar6;
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
    if (puVar6 != &local_138) goto LAB_1403059a0;
  }
  local_a0 = &local_138;
  ppuVar17 = &local_a0;
  ppuVar15 = (undefined8 **)CONCAT44(uVar16,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_168,1,ppuVar15,ppuVar17);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_c8 = 8;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uVar16 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140305a8a:
      local_158 = *puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
      if (puVar6 != &local_128) goto LAB_140305a8a;
    }
    local_98 = &local_128;
    local_158 = CONCAT44(uRam0000000141dcf8fc,_DAT_141dcf8f8);
    uStack_150 = uRam0000000141dcf900;
    uStack_14c = DAT_141dcf904;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_90 = &local_118;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_c0,1,CONCAT44(uVar16,DAT_1419fdc58),ppuVar18);
    ppuVar17 = ppuVar18;
    if (puVar6 != &local_108) {
      local_158 = *puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
        ppuVar17 = ppuVar18;
      }
      FUN_140041b80(&local_108,&local_158);
    }
    local_88 = &local_108;
    local_158 = CONCAT44(uRam0000000141dcf91c,_DAT_141dcf918);
    uStack_150 = uRam0000000141dcf920;
    uStack_14c = DAT_141dcf924;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_80 = local_f8;
    ppuVar15 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,3,ppuVar15);
  }
  local_c8 = 0xd;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  uStack_14c = 0;
  local_158 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar4 < 0x80000000) {
    local_c8 = 0x10;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_158 = CONCAT44(uRam0000000141dcf94c,_DAT_141dcf948);
    uStack_150 = uRam0000000141dcf950;
    uStack_14c = DAT_141dcf954;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_a0 = &local_138;
    if ((int)local_48[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140305cc3:
      local_158 = *puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar6 = (undefined8 *)local_40[1];
      if (puVar6 != &local_128) goto LAB_140305cc3;
    }
    local_98 = &local_128;
    local_158 = CONCAT44(uRam0000000141dcf93c,_DAT_141dcf938);
    uStack_150 = uRam0000000141dcf940;
    uStack_14c = DAT_141dcf944;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_90 = &local_118;
    local_158 = CONCAT44(uRam00000001419e3e14,_DAT_1419e3e10);
    uStack_150 = uRam00000001419e3e18;
    uStack_14c = uRam00000001419e3e1c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_88 = &local_108;
    local_158 = CONCAT44(uRam0000000141dcf90c,_DAT_141dcf908);
    uStack_150 = uRam0000000141dcf910;
    uStack_14c = DAT_141dcf914;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_80 = local_f8;
    ppuVar15 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_168,5,ppuVar15);
  }
  local_c8 = 0x13;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  uStack_14c = 0;
  local_158 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140305f58;
  local_c8 = 0x13;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_e8 = _DAT_141dcf948;
  uStack_e4 = uRam0000000141dcf94c;
  uStack_e0 = uRam0000000141dcf950;
  uStack_dc = DAT_141dcf954;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_e8);
  local_a0 = &local_138;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140305ec5:
    local_e8 = *(undefined4 *)puVar6;
    uStack_e4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_e0 = *(undefined4 *)(puVar6 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_e8);
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
    if (puVar6 != &local_128) goto LAB_140305ec5;
  }
  local_98 = &local_128;
  local_e8 = _DAT_141dcf928;
  uStack_e4 = uRam0000000141dcf92c;
  uStack_e0 = uRam0000000141dcf930;
  uStack_dc = DAT_141dcf934;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_e8);
  local_90 = &local_118;
  ppuVar15 = &local_a0;
  FUN_14008e020(param_1,param_2,&local_168,3,ppuVar15);
LAB_140305f58:
  local_c8 = 0xf;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde000 + 8))(DAT_141dde000,DAT_141a026b8);
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
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
  uVar19 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  FUN_140e87440(plVar9,DAT_1419fd848,0x80000000,&local_58,uVar14,uVar19);
  local_e8 = (undefined4)local_58;
  uStack_e4 = local_58._4_4_;
  uStack_e0 = uStack_50;
  uStack_dc = uStack_4c;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_e8);
  local_c8 = 0x10;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde000 + 8))(DAT_141dde000,DAT_1419fd698);
  if ((int)local_48[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_40;
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
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(plVar9,DAT_1419fd098,0x80000000,&local_68,uVar14,uVar19 & 0xffffffffffffff00);
  uVar16 = (undefined4)(uVar14 >> 0x20);
  local_e8 = (undefined4)local_68;
  uStack_e4 = local_68._4_4_;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_e8);
  local_a0 = &local_138;
  if (0 < (int)local_48[0]) {
    puVar12 = (undefined8 *)*local_40;
  }
  uVar5 = FUN_140e4a740(puVar12);
  puVar10 = (undefined4 *)FUN_140e48e40(&local_b0,uVar5);
  FUN_140e609c0(*local_b0);
  puVar11 = (undefined4 *)
            FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar16,DAT_1419fd0c8),&local_a0);
  if (puVar11 != puVar10) {
    local_e8 = *puVar11;
    uStack_e4 = puVar11[1];
    uStack_e0 = puVar11[2];
    uStack_dc = puVar11[3];
    if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar12 = local_40;
    do {
      puVar6 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

