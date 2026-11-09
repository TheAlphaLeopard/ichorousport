// gml_Script_InputCursorDY @ 0x14030a3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputCursorDY
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  uint local_res20;
  ulonglong uVar15;
  undefined4 uVar18;
  undefined1 **ppuVar16;
  longlong **pplVar17;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  undefined4 local_190;
  uint local_18c;
  undefined4 local_188;
  longlong local_178;
  byte local_16c;
  longlong local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  longlong local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  longlong *local_100;
  undefined1 *local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res20 = 0;
  local_d8 = "gml_Script_InputCursorDX";
  local_e0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e0;
  local_d0 = 10;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_88,param_4,2,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_178,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uVar14 = 0xffffff;
  local_b8 = 0xffffff;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_188 = 0;
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde058) &&
     (_Init_thread_header(&DAT_141dde058), DAT_141dde058 == -1)) {
    DAT_141dde050 = (longlong *)FUN_140e63aa0(DAT_1419efd88);
    _Init_thread_footer(&DAT_141dde058);
  }
  local_d0 = 10;
  plVar12 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_d0 = 10;
    if ((int)local_88[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_80;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
  }
  if ((int)local_88[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_80[1];
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar4 == 0) && (1 < (int)local_88[0])) &&
     (puVar10 = (undefined8 *)local_80[1], puVar10 != &DAT_1419df7b0)) {
    local_1b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = DAT_1419df7b8;
    uStack_1ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_1b8);
  }
  if (DAT_141ddc0c0 == '\0') {
    FUN_140e64380(DAT_141dde050,"gml_Script_InputCursorDX");
    FUN_140e64380(local_res8,"gml_Script_InputCursorDX");
  }
  local_d0 = 0xc;
  if (DAT_141ddc0c0 == '\0') {
    DAT_141ddc0c0 = '\x01';
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    plVar6 = (longlong *)(**(code **)(*DAT_141dde050 + 0x10))(DAT_141dde050,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde050);
    uVar15 = 0;
    plVar7 = (longlong *)
             gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                       (local_res8,local_res10,&local_1a8,0,0);
    if (plVar7 != plVar6) {
      local_1b8 = *plVar7;
      uStack_1b0 = (undefined4)plVar7[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1b8);
    }
    FUN_140e60910(1);
    uVar8 = (**(code **)(*DAT_141dde050 + 8))(DAT_141dde050,DAT_1419fcb48);
    plVar6 = (longlong *)(**(code **)(*DAT_141dde050 + 0x10))(DAT_141dde050,DAT_141a026b8);
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_1419fed38,0x80000000,&local_98,uVar15,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar15 >> 0x20);
    FUN_140e609c0(DAT_141dde050);
    if (&local_98 != plVar6) {
      local_1b8 = local_98;
      uStack_1b0 = uStack_90;
      uStack_1ac = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1b8);
    }
    FUN_140e60910(1);
  }
  local_d0 = 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_88[0] < 1) {
    plVar6 = &DAT_1419df7b0;
LAB_14030a7d8:
    local_1b8 = *plVar6;
    uStack_1b0 = (undefined4)plVar6[1];
    uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1b8);
  }
  else {
    plVar6 = (longlong *)*local_80;
    if (plVar6 != &local_178) goto LAB_14030a7d8;
  }
  local_108 = &local_178;
  uVar9 = CONCAT44(uVar13,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar9,&local_108);
  uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  uVar13 = 0;
  if (cVar3 == '\0') {
    local_d0 = 5;
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_88[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_14030a8a8:
      local_1b8 = *plVar6;
      uStack_1b0 = (undefined4)plVar6[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1b8);
    }
    else {
      plVar6 = (longlong *)*local_80;
      if (plVar6 != &local_168) goto LAB_14030a8a8;
    }
    local_100 = &local_168;
    local_1b8 = CONCAT44(uRam0000000141dcfb7c,_DAT_141dcfb78);
    uStack_1b0 = uRam0000000141dcfb80;
    uStack_1ac = DAT_141dcfb84;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1b8);
    local_f8 = local_158;
    plVar6 = (longlong *)
             FUN_140e634e0(local_res8,local_res10,&local_128,1,CONCAT44(uVar18,DAT_1419fdc58),
                           &local_100);
    if (plVar6 != &local_148) {
      local_1b8 = *plVar6;
      uStack_1b0 = (undefined4)plVar6[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1b8);
    }
    local_f0 = &local_148;
    local_1b8 = CONCAT44(uRam0000000141dcfb8c,_DAT_141dcfb88);
    uStack_1b0 = uRam0000000141dcfb90;
    uStack_1ac = DAT_141dcfb94;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1b8);
    local_e8 = local_138;
    ppuVar16 = &local_f8;
    FUN_14008e020(local_res8,local_res10,&local_118,3,ppuVar16);
    uVar18 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    local_188 = local_10c;
    uVar13 = local_10c;
  }
  local_d0 = 0xc;
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  local_18c = 0;
  local_198 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar10,&local_198,DAT_141955260,1);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (uVar5 < 0x80000000) {
    local_d0 = 0x10;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_1b8 = CONCAT44(uRam0000000141dcfb6c,_DAT_141dcfb68);
    uStack_1b0 = uRam0000000141dcfb70;
    uStack_1ac = DAT_141dcfb74;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1b8);
    local_108 = &local_178;
    if ((int)local_88[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_14030aaf0:
      local_1b8 = *plVar6;
      uStack_1b0 = (undefined4)plVar6[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1b8);
    }
    else {
      plVar6 = (longlong *)*local_80;
      if (plVar6 != &local_168) goto LAB_14030aaf0;
    }
    local_100 = &local_168;
    local_1b8 = CONCAT44(uRam0000000141dcfb3c,_DAT_141dcfb38);
    uStack_1b0 = uRam0000000141dcfb40;
    uStack_1ac = DAT_141dcfb44;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1b8);
    local_f8 = local_158;
    local_1b8 = CONCAT44(uRam00000001419e3e74,_DAT_1419e3e70);
    uStack_1b0 = uRam00000001419e3e78;
    uStack_1ac = uRam00000001419e3e7c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1b8);
    local_f0 = &local_148;
    local_1b8 = CONCAT44(uRam0000000141dcfb9c,_DAT_141dcfb98);
    uStack_1b0 = uRam0000000141dcfba0;
    uStack_1ac = DAT_141dcfba4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1b8);
    local_e8 = local_138;
    pplVar17 = &local_108;
    FUN_14008e020(local_res8,local_res10,&local_1a8,5,pplVar17);
    uVar18 = (undefined4)((ulonglong)pplVar17 >> 0x20);
  }
  local_d0 = 0x14;
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  local_18c = 0;
  local_198 = 0;
  iVar4 = FUN_140e851f0(puVar10,&local_198,DAT_141955260,1);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_d0 = 0x18;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_1b8 = CONCAT44(uRam0000000141dcfb6c,_DAT_141dcfb68);
    uStack_1b0 = uRam0000000141dcfb70;
    uStack_1ac = DAT_141dcfb74;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1b8);
    local_108 = &local_178;
    if ((int)local_88[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_14030acf3:
      local_1b8 = *plVar6;
      uStack_1b0 = (undefined4)plVar6[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1b8);
    }
    else {
      plVar6 = (longlong *)*local_80;
      if (plVar6 != &local_168) goto LAB_14030acf3;
    }
    local_100 = &local_168;
    local_1b8 = CONCAT44(uRam0000000141dcfb5c,_DAT_141dcfb58);
    uStack_1b0 = uRam0000000141dcfb60;
    uStack_1ac = DAT_141dcfb64;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1b8);
    local_f8 = local_158;
    pplVar17 = &local_108;
    FUN_14008e020(local_res8,local_res10,&local_1a8,3,pplVar17);
    uVar18 = (undefined4)((ulonglong)pplVar17 >> 0x20);
  }
  local_d0 = 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_1b8 = CONCAT44(uRam00000001419e3e84,_DAT_1419e3e80);
  uStack_1b0 = uRam00000001419e3e88;
  uStack_1ac = uRam00000001419e3e8c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_1b8);
  local_108 = &local_178;
  uVar9 = CONCAT44(uVar18,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar9,&local_108);
  uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    local_d0 = 7;
    if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_1b8 = CONCAT44(uRam00000001419e3e84,_DAT_1419e3e80);
    uStack_1b0 = uRam00000001419e3e88;
    uStack_1ac = uRam00000001419e3e8c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
    local_100 = &local_168;
    local_1b8 = CONCAT44(uRam0000000141dcfb4c,_DAT_141dcfb48);
    uStack_1b0 = uRam0000000141dcfb50;
    uStack_1ac = DAT_141dcfb54;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1b8);
    local_f8 = local_158;
    plVar6 = (longlong *)
             FUN_140e634e0(local_res8,local_res10,&local_128,1,CONCAT44(uVar18,DAT_1419fdc58),
                           &local_100);
    if (plVar6 != &local_148) {
      local_1b8 = *plVar6;
      uStack_1b0 = (undefined4)plVar6[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1b8);
    }
    local_f0 = &local_148;
    local_1b8 = CONCAT44(uRam0000000141dcfb8c,_DAT_141dcfb88);
    uStack_1b0 = uRam0000000141dcfb90;
    uStack_1ac = DAT_141dcfb94;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1b8);
    local_e8 = local_138;
    FUN_14008e020(local_res8,local_res10,&local_118,3,&local_f8);
    local_188 = local_10c;
    uVar13 = local_10c;
  }
  local_d0 = 0x12;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde050 + 8))(DAT_141dde050,DAT_141a026b8);
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar6);
  if (iVar4 < 1) {
    FUN_140e63970(local_78,&local_res8,&local_res10);
    goto LAB_14030b44e;
  }
  local_d0 = 0x14;
  plVar6 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe328);
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe4a8);
  plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe528);
  uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe398);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_18c = *(undefined4 *)((longlong)plVar6 + 0xc);
  local_190 = (undefined4)plVar6[1];
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_198 = *plVar6;
  }
  else {
    FUN_1400419b0(&local_198,plVar6);
  }
  local_res20 = 4;
  FUN_1400462a0(&local_198,uVar8);
  FUN_140041c60(&local_178,&local_198);
  local_res20 = 0;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_108 = &local_178;
  local_18c = *(uint *)((longlong)plVar7 + 0xc);
  local_190 = (undefined4)plVar7[1];
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_198 = *plVar7;
  }
  else {
    FUN_1400419b0(&local_198,plVar7);
  }
  local_res20 = 8;
  FUN_1400462a0(&local_198,uVar9);
  FUN_140041c60(&local_168,&local_198);
  local_res20 = 0;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_100 = &local_168;
  local_1b8 = CONCAT44(uRam0000000141dc6404,_DAT_141dc6400);
  uStack_1b0 = uRam0000000141dc6408;
  uStack_1ac = uRam0000000141dc640c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1b8);
  local_f8 = local_158;
  if (((int)local_88[0] < 2) || (plVar12 = (longlong *)local_80[1], plVar12 != &local_c8)) {
    local_1b8 = *plVar12;
    uStack_1b0 = (undefined4)plVar12[1];
    uStack_1ac = *(undefined4 *)((longlong)plVar12 + 0xc);
    FUN_140041b80(&local_c8,&local_1b8);
    uVar14 = local_bc;
  }
  else {
    uVar14 = local_b8;
  }
  if ((uVar14 & 0xffffff) == 3) {
    if (local_c8 == 0) goto LAB_14030b2e8;
LAB_14030b2b2:
    local_190 = local_c0;
    local_18c = uVar14;
    if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) == 0) {
      local_198 = local_c8;
    }
    else {
      FUN_1400419b0(&local_198,&local_c8);
    }
    plVar12 = &local_198;
    uVar5 = 2;
  }
  else {
    if ((uVar14 & 0xffffff) != 5) goto LAB_14030b2b2;
LAB_14030b2e8:
    uStack_1ac = 0;
    local_1b8 = 0;
    plVar12 = &local_1b8;
    uVar5 = 1;
  }
  uVar13 = uStack_1ac;
  local_res20 = uVar5;
  FUN_140041c60(&local_148,plVar12);
  if (((uVar5 & 2) != 0) &&
     (uVar5 = uVar5 & 0xfffffffd, local_res20 = uVar5, (1 << ((byte)local_18c & 0x1f) & 0x46U) != 0)
     ) {
    FUN_140041a50(&local_198);
  }
  if (((uVar5 & 1) != 0) && ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1b8);
  }
  local_f0 = &local_148;
  local_1b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1b0 = DAT_1419df7b8;
  uStack_1ac = DAT_1419df7bc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1b8);
  local_e8 = local_138;
  uVar8 = FUN_140087c90(local_res8,local_res10,&local_1a8,5,&local_108);
  FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_a8,local_res8,local_res10);
  plVar12 = local_res18;
  if (&local_a8 != local_res18) {
    local_1b8 = local_a8;
    uStack_1b0 = uStack_a0;
    uStack_1ac = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_res18 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_res18);
    }
    FUN_140041b80(plVar12,&local_1b8);
  }
  uVar13 = local_188;
LAB_14030b44e:
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar10 = local_80;
    do {
      puVar2 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_e0;
  return local_res18;
}

