// gml_Script_InputVibrateADSR @ 0x14037db40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVibrateADSR
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  double *pdVar13;
  undefined4 uVar14;
  double dVar15;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  double local_1a0;
  uint local_194;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  undefined8 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res20 = 0;
  local_1c0 = "gml_Script_InputVerbStateWrite";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0x11;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_98,param_4,2,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1dc = 0;
  local_1e8 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde890) &&
     (_Init_thread_header(&DAT_141dde890), DAT_141dde890 == -1)) {
    DAT_141dde898 = (longlong *)FUN_140e63aa0(DAT_1419f40a8);
    _Init_thread_footer(&DAT_141dde890);
  }
  local_1b8 = 0x11;
  pdVar13 = (double *)&DAT_1419df7b0;
  uVar12 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1b8 = 0x11;
    if ((int)local_98[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_90[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc152 == '\0') {
    FUN_140e64380(DAT_141dde898,"gml_Script_InputVerbStateWrite");
    FUN_140e64380(local_res8,"gml_Script_InputVerbStateWrite");
  }
  local_1b8 = 0x13;
  if (DAT_141ddc152 == '\0') {
    DAT_141ddc152 = '\x01';
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde898 + 0x10))(DAT_141dde898,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde898);
    puVar6 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_1e8,0,0);
    if (puVar6 != puVar5) {
      local_1f8 = (double)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1f8);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a4 = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde898 + 0x10))(DAT_141dde898,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde898);
    uVar14 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_1b0,0,0);
    if (puVar6 != puVar5) {
      local_1f8 = (double)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_1b8 = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_98[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14037df17:
    local_1f8 = (double)*puVar5;
    uStack_1f0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
  }
  else {
    puVar5 = (undefined8 *)local_90[1];
    if (puVar5 != &local_188) goto LAB_14037df17;
  }
  local_f8 = &local_188;
  ppuVar18 = &local_f8;
  ppuVar16 = (undefined8 **)CONCAT44(uVar14,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1e8,1,ppuVar16,ppuVar18);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_1b8 = 7;
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    uVar14 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a4 = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((int)local_98[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_14037e003:
      local_1f8 = (double)*puVar5;
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar5 = (undefined8 *)local_90[1];
      if (puVar5 != &local_178) goto LAB_14037e003;
    }
    local_f0 = &local_178;
    local_1f8 = (double)CONCAT44(uRam0000000141dd1eac,_DAT_141dd1ea8);
    uStack_1f0 = uRam0000000141dd1eb0;
    uStack_1ec = DAT_141dd1eb4;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1f8);
    local_e8 = &local_168;
    ppuVar18 = &local_f0;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_138,1,CONCAT44(uVar14,DAT_1419fdc58),
                           ppuVar18);
    if (puVar5 != &local_158) {
      local_1f8 = (double)*puVar5;
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1f8);
    }
    local_e0 = &local_158;
    local_1f8 = (double)CONCAT44(uRam0000000141dd1edc,_DAT_141dd1ed8);
    uStack_1f0 = uRam0000000141dd1ee0;
    uStack_1ec = DAT_141dd1ee4;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1f8);
    local_d8 = local_148;
    ppuVar16 = &local_e8;
    FUN_14008e020(local_res8,local_res10,&local_1b0,3,ppuVar16);
  }
  local_1b8 = 10;
  if ((int)local_98[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[1];
  }
  uStack_1ec = 0;
  local_1f8 = 1.0;
  uVar4 = FUN_140e851f0(puVar5,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (uVar4 < 0x80000000) {
    local_1b8 = 0xc;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = (double)CONCAT44(uRam0000000141dd1e8c,_DAT_141dd1e88);
    uStack_1f0 = uRam0000000141dd1e90;
    uStack_1ec = DAT_141dd1e94;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
    local_f8 = &local_188;
    if ((int)local_98[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_14037e245:
      local_1f8 = (double)*puVar5;
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar5 = (undefined8 *)local_90[1];
      if (puVar5 != &local_178) goto LAB_14037e245;
    }
    local_f0 = &local_178;
    local_1f8 = (double)CONCAT44(uRam0000000141dd1e7c,_DAT_141dd1e78);
    uStack_1f0 = uRam0000000141dd1e80;
    uStack_1ec = DAT_141dd1e84;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1f8);
    local_e8 = &local_168;
    local_1f8 = (double)CONCAT44(uRam00000001419e45c4,_DAT_1419e45c0);
    uStack_1f0 = uRam00000001419e45c8;
    uStack_1ec = uRam00000001419e45cc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1f8);
    local_e0 = &local_158;
    local_1f8 = (double)CONCAT44(uRam0000000141dd1ecc,_DAT_141dd1ec8);
    uStack_1f0 = uRam0000000141dd1ed0;
    uStack_1ec = DAT_141dd1ed4;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1f8);
    local_d8 = local_148;
    ppuVar16 = &local_f8;
    FUN_14008e020(local_res8,local_res10,&local_1e8,5,ppuVar16);
  }
  local_1b8 = 0x14;
  if ((int)local_98[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[1];
  }
  uStack_1ec = 0;
  local_1f8 = 0.0;
  iVar3 = FUN_140e851f0(puVar5,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_14037e4df;
  local_1b8 = 0x18;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_108 = CONCAT44(uRam0000000141dd1e8c,_DAT_141dd1e88);
  uStack_100 = uRam0000000141dd1e90;
  uStack_fc = DAT_141dd1e94;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_108);
  local_f8 = &local_188;
  if ((int)local_98[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14037e448:
    local_108 = *puVar5;
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_108);
  }
  else {
    puVar5 = (undefined8 *)local_90[1];
    if (puVar5 != &local_178) goto LAB_14037e448;
  }
  local_f0 = &local_178;
  local_108 = CONCAT44(uRam0000000141dd1e6c,_DAT_141dd1e68);
  uStack_100 = uRam0000000141dd1e70;
  uStack_fc = DAT_141dd1e74;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_108);
  local_e8 = &local_168;
  ppuVar16 = &local_f8;
  FUN_14008e020(local_res8,local_res10,&local_1e8,3,ppuVar16);
LAB_14037e4df:
  local_1b8 = 0x18;
  local_a0 = (**(code **)(*DAT_141dde898 + 8))(DAT_141dde898,DAT_1419fcb48);
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  FUN_140e87440(local_a0,DAT_1419fe1c8,0x80000000,&local_b8,(ulonglong)ppuVar16 & 0xffffffffffffff00
                ,uVar19);
  local_1f8 = local_b8;
  uStack_1f0 = uStack_b0;
  uStack_1ec = uStack_ac;
  FUN_140041b80(&local_118,&local_1f8);
  local_1b8 = 0x19;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar17 = 0;
  pdVar8 = (double *)gml_Script_InputVerbGetBindingName(local_res8,local_res10,&local_1e8,0,0);
  if (pdVar8 != &local_1a0) {
    local_1f8 = *pdVar8;
    uStack_1f0 = *(undefined4 *)(pdVar8 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_1f8);
  }
  local_1b8 = 0x1b;
  uStack_1ec = DAT_141dd1ea4;
  uStack_1f0 = DAT_141dd1ea0;
  if ((1 << ((byte)DAT_141dd1ea4 & 0x1f) & 0x46U) == 0) {
    local_1f8 = DAT_141dd1e98;
  }
  else {
    FUN_1400419b0(&local_1f8,&DAT_141dd1e98);
  }
  if ((int)local_98[0] < 1) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)*local_90;
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060();
  }
  FUN_140ececc0((longlong)dVar15,0xb,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1b8 = 0x1c;
  if ((int)local_98[0] < 1) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)*local_90;
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060();
  }
  FUN_140ececc0((longlong)dVar15,3,&local_1a0);
  local_1b8 = 0x1e;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde898 + 8))(DAT_141dde898,DAT_141a026b8);
  if ((int)local_98[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[1];
  }
  local_a8 = plVar9;
  iVar3 = FUN_140e4a740(puVar5);
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
  uVar19 = uVar19 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(plVar9,DAT_1419fd6e8,0x80000000,&local_c8,uVar17,uVar19);
  local_1f8 = (double)local_c8;
  uStack_1f0 = uStack_c0;
  uStack_1ec = uStack_bc;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1f8);
  local_1b8 = 0x1f;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = 0.0;
  local_1b8 = 0x20;
  dVar15 = local_1a0;
  if ((local_194 & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_1a0);
  }
  uVar7 = local_118;
  uVar10 = (ulonglong)dVar15;
  uVar14 = local_10c;
  if (0 < (int)uVar10) {
    do {
      local_108 = (ulonglong)((int)uVar10 - 1);
      local_1b8 = 0x22;
      iVar3 = FUN_140e4a740(&local_1d8);
      if (((local_11c & 0xffffff) == 2) && (local_128 != 0)) {
        if ((iVar3 < 0) || (*(int *)(local_128 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(local_128 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_128 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar9 = &local_128;
      }
      iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,plVar9);
      if (0 < iVar3) {
        do {
          local_1b8 = 0x24;
          uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde28);
          if ((int)local_98[0] < 1) {
            pdVar8 = (double *)&DAT_1419df7b0;
          }
          else {
            pdVar8 = (double *)*local_90;
          }
          if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
            dVar15 = *pdVar8;
          }
          else {
            dVar15 = (double)FUN_140e4b060();
          }
          FUN_140ececc0((longlong)dVar15,10,uVar11);
          local_1b8 = 0x25;
          uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd488);
          if ((int)local_98[0] < 1) {
            pdVar8 = (double *)&DAT_1419df7b0;
          }
          else {
            pdVar8 = (double *)*local_90;
          }
          if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
            dVar15 = *pdVar8;
          }
          else {
            dVar15 = (double)FUN_140e4b060();
          }
          FUN_140ececc0((longlong)dVar15,8,uVar11);
          local_1b8 = 0x26;
          uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6f8);
          if ((int)local_98[0] < 1) {
            pdVar8 = (double *)&DAT_1419df7b0;
          }
          else {
            pdVar8 = (double *)*local_90;
          }
          if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
            dVar15 = *pdVar8;
          }
          else {
            dVar15 = (double)FUN_140e4b060();
          }
          FUN_140ececc0((longlong)dVar15,8,uVar11);
          local_1b8 = 0x27;
          uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd758);
          uStack_1ec = local_10c;
          uStack_1f0 = local_110;
          if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) == 0) {
            local_1f8 = (double)uVar7;
          }
          else {
            FUN_1400419b0(&local_1f8,&local_118);
          }
          local_res20 = 1;
          FUN_1400462a0(&local_1f8,uVar11);
          if ((int)local_98[0] < 1) {
            pdVar8 = (double *)&DAT_1419df7b0;
          }
          else {
            pdVar8 = (double *)*local_90;
          }
          if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
            dVar15 = *pdVar8;
          }
          else {
            dVar15 = (double)FUN_140e4b060();
          }
          FUN_140ececc0((longlong)dVar15,6,&local_1f8);
          local_res20 = 0;
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
        } while (cVar2 != '\0');
        uVar14 = local_10c;
      }
      FUN_140e63970(local_88,&local_res8,&local_res10);
      DAT_141a67c38 = 1;
      uVar19 = uVar19 & 0xffffffffffffff00;
      uVar17 = uVar17 & 0xffffffffffffff00;
      FUN_140e87440(local_a0,DAT_1419fe1c8,0x80000000,&local_b8,uVar17,uVar19);
      if ((int)local_98[0] < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)local_90[1];
      }
      iVar3 = FUN_140e4a740(puVar5);
      if (((*(uint *)((longlong)local_a8 + 0xc) & 0xffffff) == 2) && (lVar1 = *local_a8, lVar1 != 0)
         ) {
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
        plVar9 = local_a8;
      }
      uVar19 = uVar19 & 0xffffffffffffff00;
      uVar17 = uVar17 & 0xffffffffffffff00;
      FUN_140e87440(plVar9,DAT_1419fd6e8,0x80000000,&local_c8,uVar17,uVar19);
      DAT_141a67c38 = 0;
      DAT_141a72aac = 0;
      local_1b8 = 0x2a;
      uVar4 = local_1cc & 0xffffff;
      if (uVar4 == 0) {
LAB_14037ebaf:
        local_1d8 = local_1d8 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_1d8 = (double)FUN_140e4b060(&local_1d8);
          local_1cc = 0;
          goto LAB_14037ebaf;
        }
        if (uVar4 == 7) {
          local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_1d8 = (double)((longlong)local_1d8 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_1cc = 0;
            goto LAB_14037ebaf;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
        }
      }
      if (local_78 != 0) {
        FUN_140e4cd60();
      }
      uVar10 = local_108;
    } while (0 < (int)local_108);
    param_3 = local_res18;
  }
  local_1b8 = 0x2d;
  uStack_1ec = DAT_141dd1ec4;
  uStack_1f0 = DAT_141dd1ec0;
  if ((1 << ((byte)DAT_141dd1ec4 & 0x1f) & 0x46U) == 0) {
    local_1f8 = (double)DAT_141dd1eb8;
  }
  else {
    FUN_1400419b0(&local_1f8,&DAT_141dd1eb8);
  }
  if (0 < (int)local_98[0]) {
    pdVar13 = (double *)*local_90;
  }
  if ((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar13;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar13);
  }
  FUN_140ececc0((longlong)dVar15,0xb,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,5,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar5 = local_90;
    do {
      puVar6 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

